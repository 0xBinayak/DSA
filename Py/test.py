def is_prime(n:int)  -> bool :
    
    if n < 2:
        
        return False 
    
    for i in range (2,int(n ** (0.5)+1) ) :
        
        if n % i == 0:
            
            return False

    return True



# def circular_prime(n: int ) -> bool : 

#         s=str(n)
        
#         for i in range(len(s)):
#             r_str= s[i:] + s[:i]
#             r_int= int(r_str)
            
#             if not is_prime(r_int):
                
#                 return False
            
#         return  True
    
    
# def fibonacci_recursive(n):
#     if n <= 1:
#         return n
#     return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)
    
    

# def factorial_recursive(n):
#     if n == 0 or n == 1:
#         return 1
#     return n * factorial_recursive(n - 1)



# def get_fibonacci_series(n: int) -> list:
#     """Returns a list of the first n Fibonacci numbers."""
#     if n <= 0:
#         return []
#     elif n == 1:
#         return [0]
    
#     # Start the sequence
#     series = [0, 1]
    
#     # Loop to generate the rest
#     for i in range(2, n):
#         next_val = series[-1] + series[-2]
#         series.append(next_val)
        
#     return series

# def get_factorial(n: int) -> int:
#     """Calculates n! using a loop."""
#     if n < 0:
#         return 0 # Error case
#     if n == 0 or n == 1:
#         return 1
        
#     result = 1
#     for i in range(2, n + 1):
#         result *= i
#     return result



# if __name__ == "__main__" :
#     a = int(input("Number : "))
    
#     print( get_fibonacci_series(a))
    
    
    
    # for i in range(a):
    #     # This prints the number at index i (0, then 1, then 2...)
    #     print(fibonacci_recursive(i), end=" ")