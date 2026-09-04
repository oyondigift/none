#display the welcome menu
print("---welcome to Sunshine AMS\n 1.New student\n 2.Registration\n 3.key in student marks\n 4.Print student progressive\n 5.Exit\n press any key from the above numbers--")
grade=()
key=int(input())
if key==1:
    name=input("Enter Full Name\n")
    regNo=input("Enter Registration Number\n")
    course=input("Enter Course Name\n")
    department=input("Enter Department\n")
    print(f"Name:{name}\tRegistration number:{regNo}\tCourse:{course}\tDepartment:{department}")
elif key==2:
    studentname=input("Enter the new student name\n")
    semester=input("Enter the nummber of semesters\n")
    academicyear=input("Enter the current Academic year\n")
    print(f"Name:{studentname}\tSemester:{semester}\tAcademicyear:{academicyear}")
elif key==3:
    print("A student can do a maximum of 8 units and a minimum of 4 in a semester\n")
    unitname=input("Enter Unit Name\n")
    unitcode=input("Enter Unit Code\n")
    sittingcat=int(input("Enter cat mark out of 15\n"))
    assignement=int(input("Enter assignment mark out of 10\n"))
    attendancemark=int(input("Enter attendance marks out of 5\n"))
    exammark=int(input("Enter exam mark out of 70\n"))
    finalmark=sittingcat+assignement+attendancemark+exammark
    if finalmark>=70 and finalmark<=100:
        grade=("A\tremarks\tExcellent")
    if finalmark>=60 and finalmark<=69:
        grade=("B\tremarks\tGood")
    if finalmark>50 and finalmark<=59:
        grade=("C\tremarks\tFair")
    if finalmark>=40 and finalmark<=49:
        grade=("D\tremarks\tPass")
    if finalmark>=0 and finalmark<=39:
        grade=("F\tremarks\tFail")  
    print(f"Unit:{unitname}\tCode:{unitcode}\tCAT:{sittingcat}\tassignment:{assignement}\tattendancemark:{attendancemark}\texammark:{exammark}\tfinalscore:{finalmark}\tgrade:{grade}")
elif key==4:
    registration=input("Enter registartion number\n")
    fullnames=input("Enter full name\n")
    department=input("Enter Department room\n")
    academicyear=input("Enter Academic year 0000/0000 format\n")
    course=input("Enter Course Name\n")
    print("Student Transcript of Sunshine College International")
    print(f"Registration:{registration}\n")
    print(f"Full names:{fullnames}\n")
    print(f"Department:{department}\n")
    print(f"Academicyear:{academicyear}\n")
    print(f"Course:{academicyear}\n")
elif key==5:
    print("Exiting the program")
    exit()
else:
    print("Error")
    exit()
