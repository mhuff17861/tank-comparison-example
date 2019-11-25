class Tank {
/**************************Constructors*******************/

	constructor() {
		this.id = 0;
		this.speed = 0;
		this.ammo = 0;
	}

	constructor(i, sp, am) {
		setID(i);
		setSpeed(sp);
		setAmmo(am);
	}

/*************************Accessors*************************/

    getID(){
        return this.id;
    }
    getSpeed(){
        return this.speed;
    }
    getAmmo(){
        return this.ammo;
    }

/*************************Mutators**************************/

    setID(y) {
    	if (y >= 0 && y <= 50) {
    		this.id = y;
    	}
    	else
    		throw "ID must be between 0 and 50";
    }

    setSpeed(f) {
    	if (f >= 0 && f <= 60) {
    		this.speed = f;
    	}
    	else
    		throw "Speed must be between 0 and 60";
    }

    setAmmo(y) {
    	if (y >= 0 && y <= 40) {
    		this.ammo = y;
    	}
    	else
    		throw "Ammo must be between 0 and 40";
    }

    increaseSpeed() {
    	var test = this.speed + 5;

    	if (test <= 60)
    	this.speed = test;

    	return this.speed;
    }

    decreaseSpeed() {
    	var test = this.speed - 5;

    	if (test >= 0)
    	this.speed = test;

    	return this.speed;
    }

    fire() {
    	var test = this.ammo - 1;

    	if (test >= 0)
    	this.ammo = test;

    	return this.ammo;
    }

    reload() {
    	var test = this.ammo + 5;

    	if (test <= 40)
    	this.ammo = test;

    	return this.ammo;
    }

}

