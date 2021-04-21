var petrol = 30;
var mileage = 30;
var x = 0;
var mov = 1;
console.log("Petrol Pumps generated at 5, 10, 15, 20, 25")
while(x<100){
		x = x + 4;
		mileage = mileage-4;
		if(mileage<8){
			mileage= mileage+20;
		};
		console.log("Move 1 Car at" x "Petrol remaining" mileage);
		mov = mov+1;
	}
	console.log("reached")