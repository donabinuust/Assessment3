InsurantData()
{

	lr_start_transaction("enter first name");

	lr_end_transaction("enter first name",LR_AUTO);

	lr_start_transaction("enter last name");

	lr_end_transaction("enter last name",LR_AUTO);

	lr_start_transaction("select date of birth");

	lr_end_transaction("select date of birth",LR_AUTO);

	lr_start_transaction("select gender");

	lr_end_transaction("select gender",LR_AUTO);

	lr_start_transaction("enter address");

	lr_end_transaction("enter address",LR_AUTO);

	lr_start_transaction("select country");

	lr_end_transaction("select country",LR_AUTO);

	lr_start_transaction("enter zip code");

	lr_end_transaction("enter zip code",LR_AUTO);

	lr_start_transaction("enter city");

	lr_end_transaction("enter city",LR_AUTO);

	lr_start_transaction("select occupation");

	lr_end_transaction("select occupation",LR_AUTO);

	lr_start_transaction("select hobbies");

	lr_end_transaction("select hobbies",LR_AUTO);

	lr_start_transaction("click next");

	lr_end_transaction("click next",LR_AUTO);

	return 0;
}
