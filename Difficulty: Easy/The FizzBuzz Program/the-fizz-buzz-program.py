#User function Template for python3

def fizzBuzz(x):
    if(x%3==0 and x%5==0):
        print("FizzBuzz");
        return;
    if(x%3==0):
        print("Fizz");
        return;
    if(x%5==0):
        print("Buzz");
        return;
    else:
        print(x);