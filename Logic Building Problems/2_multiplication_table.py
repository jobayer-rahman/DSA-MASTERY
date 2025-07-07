def times_table(number):
    for i in range(1, 11):
        print(number, "*", i, "=", number*i)
        
def times_table_with_recursive_method(number, i=1):
    if (i == 11):
        return
    print(number, "*", i, "=", number*i)
    i += 1
    times_table_with_recursive_method(number, i)
        

if __name__ == "__main__":
    input_number = int(input())
    # times_table(number=input_number)
    times_table_with_recursive_method(input_number)