Buy2()
{

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Origin", 
		"http://blazedemo.com");

	lr_think_time(8);

	web_submit_form("reserve.php", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Buenos Aires", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=4", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		LAST);

	return 0;
}