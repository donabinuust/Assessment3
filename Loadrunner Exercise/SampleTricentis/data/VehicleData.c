VehicleData()
{

	lr_start_transaction("select make");

	lr_end_transaction("select make",LR_AUTO);

	lr_start_transaction("enter engine performance");

	lr_end_transaction("enter engine performance",LR_AUTO);

	lr_start_transaction("enter date of manufacture");

	lr_end_transaction("enter date of manufacture",LR_AUTO);

	lr_start_transaction("enter no of seats");

	lr_end_transaction("enter no of seats",LR_AUTO);

	lr_start_transaction("enter fuel type");

	lr_end_transaction("enter fuel type",LR_AUTO);

	lr_start_transaction("enter list price");

	lr_end_transaction("enter list price",LR_AUTO);

	lr_start_transaction("enter license plate no");

	lr_end_transaction("enter license plate no",LR_AUTO);

	lr_start_transaction("enter annual mileage");

	lr_end_transaction("enter annual mileage",LR_AUTO);

	lr_start_transaction("click on next button");

	lr_end_transaction("click on next button",LR_AUTO);

	return 0;
}
