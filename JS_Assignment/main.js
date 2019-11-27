//Once the page has loaded setup event listener for button presses
window.onload = function() {
    document.getElementById("btnTank").addEventListener("click", test);
}

//The test function which will be run once the user has entered tank information
function test() {
    clearOutput();
	var id, ammo, count, speed;
    var milsec = 1500;

	try {
        count = document.getElementById("fire").value;
	    one = new Tank();

        id = document.getElementById("id1").value;
        speed = document.getElementById("speed1").value;
        ammo = document.getElementById("ammo1").value;
		one.setID(id);
		one.setSpeed(speed);
		one.setAmmo(ammo);

        id = document.getElementById("id2").value;
        speed = document.getElementById("speed2").value;
        ammo = document.getElementById("ammo2").value;

		two = new Tank(id, speed, ammo);

		outputTankInfo(one);
		outputTankInfo(two);

        appendHTML("<p>Increasing Speed</p>");
		one.increaseSpeed();
		two.increaseSpeed();

		outputTankInfo(one);
		outputTankInfo(two);

        appendHTML("<p>Decreasing Speed</p>");
		one.decreaseSpeed();
		two.decreaseSpeed();

		outputTankInfo(one);
		outputTankInfo(two);

        appendHTML("<p>Firing</p>");
		for (var i=0;i<count;i++) {
			one.fire();
			two.fire();
	    }

	    outputTankInfo(one);
		outputTankInfo(two);

        appendHTML("<p>Reloading</p>");
		one.reload();
		two.reload();

		outputTankInfo(one);
		outputTankInfo(two);

	} catch (error) {
        appendHTML("<p>" + error + "</p>");
	}

}

/***************************function definitions**************************/


function outputTankInfo(t) {
    var tankInfo = "";
    tankInfo += "<p>Tank ID: " + t.getID() + "</p>";
    tankInfo += "<p>Tank Speed: " + t.getSpeed() + "</p>";
    tankInfo += "<p>Tank Ammo: " + t.getAmmo() + "</p><br><br>";

    appendHTML(tankInfo);
}

function appendHTML(out) {
    var output = document.getElementById("test-output");
    output.innerHTML += out;
}

function clearOutput() {
    var output = document.getElementById("test-output");
    output.innerHTML = "";
}

