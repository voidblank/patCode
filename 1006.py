N = int(input())
# user = {}
signInFirst = "99:99:99"
signOutLast = "00:00:00"
for i in range(N):
    Id, signIn, signOut = map(str, input().split())
    # user[Id] = [signIn, signOut]
    if signInFirst > signIn:
        signInFirst = signIn
        signInFirstNumber = Id
    if signOutLast < signOut:
        signOutLast = signOut
        signOutLastNumber = Id

print(signInFirstNumber, signOutLastNumber)