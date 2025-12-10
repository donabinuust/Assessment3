Automobile()
{

	lr_start_transaction("select vehicle");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(9);

/*Correlation comment - Do not change!  Original value='7000000' Name ='CorrelationParameter' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=option\\ value=\"(.*?)\">\\ 7\\.000\\.000,00",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);
		

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
