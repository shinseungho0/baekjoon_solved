while True:
    n = list(map(int,input().split()))
    if n[0] == n[1] == n[2] == 0:
        break
    n.sort(reverse = True)    #내림차순
    if n[0]**2 == n[1]**2 + n[2]**2:
      print("right")
    else:
      print("wrong")