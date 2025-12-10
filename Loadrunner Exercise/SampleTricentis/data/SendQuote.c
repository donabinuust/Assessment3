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
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/app.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Make", "Value=Audi", ENDITEM, 
		"Name=[kW]", "Value=300", ENDITEM, 
		"Name=Date of Manufacture", "Value=12/03/2025", ENDITEM, 
		"Name=Number of Seats", "Value=3", ENDITEM, 
		"Name=Fuel Type", "Value=Petrol", ENDITEM, 
		"Name=List Price", "Value=50000", ENDITEM, 
		"Name=License Plate Number", "Value=AB23CG", ENDITEM, 
		"Name=Annual Mileage", "Value=350", ENDITEM, 
		"Name=First Name", "Value=Dona", ENDITEM, 
		"Name=Last Name", "Value=Binu", ENDITEM, 
		"Name=Date of Birth", "Value=04/04/2002", ENDITEM, 
		"Name=Gender", "Value=Female", ENDITEM, 
		"Name=Street Address", "Value=123 Eagle Street", ENDITEM, 
		"Name=Country", "Value=Argentina", ENDITEM, 
		"Name=Zip Code", "Value=686603", ENDITEM, 
		"Name=City", "Value=Buenos", ENDITEM, 
		"Name=Occupation", "Value=Public Official", ENDITEM, 
		"Name=Hobbies", "Value=BungeeJumping", ENDITEM, 
		"Name=Hobbies", "Value=CliffDiving", ENDITEM, 
		"Name=Website", "Value=", ENDITEM, 
		"Name=Picture", "Value=", ENDITEM, 
		"Name=Start Date", "Value=02/06/2026", ENDITEM, 
		"Name=Insurance Sum", "Value=7000000", ENDITEM, 
		"Name=Merit Rating", "Value=Bonus 5", ENDITEM, 
		"Name=Damage Insurance", "Value=Partial Coverage", ENDITEM, 
		"Name=Optional Products[]", "Value=Yes", ENDITEM, 
		"Name=Courtesy Car", "Value=No", ENDITEM, 
		"Name=Price Sum", "Value=652.00", ENDITEM, 
		"Name=Select Option", "Value=Gold", ENDITEM, 
		"Name=Quote Type", "Value=S", ENDITEM, 
		"Name=E-Mail", "Value=tunapinu@gmail.com", ENDITEM, 
		"Name=Phone", "Value=8156954188", ENDITEM, 
		"Name=Username", "Value=tunapi", ENDITEM, 
		"Name=Password", "Value=Tuna@2002", ENDITEM, 
		"Name=Confirm Password", "Value=Tuna@2002", ENDITEM, 
		"Name=Comments", "Value=", ENDITEM, 
		LAST);

	return 0;
}