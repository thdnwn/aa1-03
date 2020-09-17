// tcp client2
var net = require('net');
var port = 3000;
var client = new net.Socket();

// Connection using socket
client.connect(port, "127.0.0.1");

// Receive data from socket
client.on("data", (data) => {
    console.log("Data: " + data);
    client.destroy();
});

// Add a 'close' event handler for the client socket
client.on('close', () => {
    console.log('Connection closed');
});