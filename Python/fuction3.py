def grade(marks):
    if marks>=70 and marks <=100:
        grade='A'
    elif marks>=60 and marks <=69:
        grade='B'
    elif marks>=50 and marks<=59:
        grade='C'
    elif marks>=40 and marks<=49:
        grade='D'
    elif marks>=30 and marks<=39:
        grade='F'
    return grade

#calling the fuction grading
marks=int(input("enter the marks of a student\n"))
print(f"{marks} is equivalent to\t{grade(marks)}")