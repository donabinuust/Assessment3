PriceOption()
{

	lr_start_transaction("select option");

	lr_end_transaction("select option",LR_AUTO);

	lr_start_transaction("click on next button");

	lr_end_transaction("click on next button",LR_AUTO);

	return 0;
}
