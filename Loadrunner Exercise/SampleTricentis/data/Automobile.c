Automobile()
{

	lr_start_transaction("select vehicle");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(9);

	web_url("app.php", 
		"URL=https://sampleapp.tricentis.com/101/app.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("select vehicle",LR_AUTO);

	return 0;
}
