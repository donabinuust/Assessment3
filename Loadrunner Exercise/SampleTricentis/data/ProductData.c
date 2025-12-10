ProductData()
{

	lr_start_transaction("select start date");

	lr_end_transaction("select start date",LR_AUTO);

	lr_start_transaction("select insurance sum");

	lr_end_transaction("select insurance sum",LR_AUTO);

	lr_start_transaction("select merit rating");

	lr_end_transaction("select merit rating",LR_AUTO);

	lr_start_transaction("select damage insurance");

	lr_end_transaction("select damage insurance",LR_AUTO);

	lr_start_transaction("select optional products");

	lr_end_transaction("select optional products",LR_AUTO);

	lr_start_transaction("select courtesy car");

	lr_end_transaction("select courtesy car",LR_AUTO);

	lr_start_transaction("click on next button");

	lr_end_transaction("click on next button",LR_AUTO);

	return 0;
}
