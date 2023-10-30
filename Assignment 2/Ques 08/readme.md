function calculate_persistence(num):
    persistence = 0
    while num >= 10:
        product = 1
        while num > 0:
            product *= num % 10
            num = num / 10  // integer division
        num = product
        persistence = persistence + 1
    return persistence

function main():
    while True:
        display "Enter a positive integer (EOF to quit): "
        input num
        if num is not a positive integer:
            display "Please enter a positive integer."
        else:
            persistence = calculate_persistence(num)
            display "The persistence of ", num, " is ", persistence
