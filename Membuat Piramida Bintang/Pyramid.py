#Piramida Normal

print("\nNormal Pyramid")
for i in range(5):
    x='* '
    x=x*i
    print(f'{x: ^10}')

#Inverted Pyramid

print("\nInverted Pyramid")
for i in range(5):
    x='* '
    x=x*(5-i)
    print(f'{x: ^10}')

#Left Pyramid

print('\nLeft Triangle Pyramid')
for i in range(5):
    x='* '
    x=x*i
    print(f'{x: <10}')

#Right Pyramid

print('\nRight Triangle Pyramid')
for i in range(5):
    x='* '
    x=x*i
    print(f'{x: >10}')