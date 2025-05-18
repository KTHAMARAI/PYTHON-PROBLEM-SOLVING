if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    num = student_marks.get(query_name)
suma = sum(num) / len(scores)
redon = "%.2f" % suma
print(redon)
