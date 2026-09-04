catmark=int(input("enter cat marks\n"))
endexam=int(input("enter end marks\n"))
finalscore=catmark+endexam
if finalscore>=70 and finalscore<=100:
    grade="A"
if finalscore>=60 and finalscore<=69:
    grade="B"
if finalscore>=50 and finalscore<=59:
    grade="C"
if finalscore>=40 and finalscore<=49:
    grade="D"
if finalscore>=0 and finalscore<=39:
    grade="F"
print("catmark\tendexam\tfinalscore\tgrade\n")
print(f"{catmark}\t{endexam}\t{finalscore}\t{grade}\n")

 