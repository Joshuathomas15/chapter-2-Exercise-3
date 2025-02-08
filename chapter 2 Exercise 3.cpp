Purchase_price=95
state_tax_rate=0.04
county_tax_rate=0.02
state_sales_tax=purchase * county_tax_rate
county_sales_tax = purchase_price * county_tax_rate
total_sales_tax = state_sales_tax + county_sales_tax
print("Total sales tax on a $95 purchase:", total_sales_tax)


