SendQuote()
{

	lr_start_transaction("enter email");

	lr_end_transaction("enter email",LR_AUTO);

	lr_start_transaction("enter phone");

	lr_end_transaction("enter phone",LR_AUTO);

	lr_start_transaction("enter username");

	lr_end_transaction("enter username",LR_AUTO);

	lr_start_transaction("enter password");

	lr_end_transaction("enter password",LR_AUTO);

	lr_start_transaction("confirm password");

	lr_end_transaction("confirm password",LR_AUTO);

	lr_start_transaction("click send button");

	lr_end_transaction("click send button",LR_AUTO);

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(667);

	web_submit_data("quote.php",
		"Action=https://sampleapp.tricentis.com/101/tcpdf/pdfs/quote.php",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://sampleapp.tricentis.com/101/app.php",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=Make", "Value={make}", ENDITEM,
		"Name=[kW]", "Value={engineperformance}", ENDITEM,
		"Name=Date of Manufacture", "Value={dateofmanufacture}", ENDITEM,
		"Name=Number of Seats", "Value={seats}", ENDITEM,
		"Name=Fuel Type", "Value={fuel}", ENDITEM,
		"Name=List Price", "Value={listprice}", ENDITEM,
		"Name=License Plate Number", "Value={licenseplate}", ENDITEM,
		"Name=Annual Mileage", "Value={mileage}", ENDITEM,
		"Name=First Name", "Value={firstname}", ENDITEM,
		"Name=Last Name", "Value={lastname}", ENDITEM,
		"Name=Date of Birth", "Value={dob}", ENDITEM,
		"Name=Gender", "Value={gender}", ENDITEM,
		"Name=Street Address", "Value=123 Eagle Street", ENDITEM,
		"Name=Country", "Value={country}", ENDITEM,
		"Name=Zip Code", "Value={zip}", ENDITEM,
		"Name=City", "Value=Buenos", ENDITEM,
		"Name=Occupation", "Value={occupation}", ENDITEM,
		"Name=Hobbies", "Value={hobby}", ENDITEM,
		"Name=Website", "Value=", ENDITEM,
		"Name=Picture", "Value=", ENDITEM,
		"Name=Start Date", "Value=02/06/2026", ENDITEM,
		"Name=Insurance Sum", "Value={CorrelationParameter}", ENDITEM,
		"Name=Merit Rating", "Value=Bonus 5", ENDITEM,
		"Name=Damage Insurance", "Value=Partial Coverage", ENDITEM,
		"Name=Optional Products[]", "Value=Yes", ENDITEM,
		"Name=Courtesy Car", "Value=No", ENDITEM,
		"Name=Price Sum", "Value=652.00", ENDITEM,
		"Name=Select Option", "Value=Gold", ENDITEM,
		"Name=Quote Type", "Value=S", ENDITEM,
		"Name=E-Mail", "Value={username}nu@gmail.com", ENDITEM,
		"Name=Phone", "Value=8156954188", ENDITEM,
		"Name=Username", "Value={username}", ENDITEM,
		"Name=Password", "Value={password}", ENDITEM,
		"Name=Confirm Password", "Value={password}", ENDITEM,
		"Name=Comments", "Value=", ENDITEM,
		LAST);

	return 0;
}