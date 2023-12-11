total_gallons = 0
total_miles = 0

gallons = float(input("Enter gallons used (-1 to quit): "))

while not gallons == -1:
    miles = float(input("Enter miles driven: "))

    mpg = miles/gallons
    print("mpg: {:0.2f}\n".format(mpg))
    total_gallons = gallons + total_gallons
    total_miles = miles + total_miles
    gallons = float(input("Enter gallons used (-1 to quit): "))
averagempg = total_miles/total_gallons
print("average mpg:", round(averagempg, 2))
