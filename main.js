const { app, BrowserWindow } = require('electron');
const fs = require('node:fs');

const initConfig = ()=>{
	console.log("[] Loading config file");
	let jsonData = fs.readFileSync("config.json", 'utf-8');
	return JSON.parse(jsonData);
}

const initDb = (config)=>{
	console.log("[] Initializing Database");
	console.log(`[] --Reading from ${config.dbFile}`);
	jsonData = fs.readFileSync(config.dbFile, 'utf-8');
	
	console.log("[] --Data successfully read");
	console.log("[] --Loading data into memory");
	return JSON.parse(jsonData);
}

app.whenReady().then(()=>{
	try{
		const config = initConfig();
		const db = initDb(config);
		
		console.log("[] Data successfully loaded");
		createWindow(db, config.windowConfig);
	}catch (e){
		console.error(e);
		return;
	}
})

const createWindow = (db, config)=>{
	console.log("[] Initializing UI");
	console.log("[] --Building UI window");
	const win = new BrowserWindow({
		width: config.width,
		height: config.height
	})

	console.log(`[] --Loading ${config.homepage}`)
	win.loadFile(config.homepage);
}
