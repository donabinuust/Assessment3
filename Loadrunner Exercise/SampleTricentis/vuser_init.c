/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");
	
	web_reg_find("Text=Welcome Aboard",
		LAST);

	web_url("101", 
		"URL=https://sampleapp.tricentis.com/101", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t{seats}.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	return 0;
}
