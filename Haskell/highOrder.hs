highO f list = map f list

isOdd x = mod x 2 /= 0
oddFactors n = (filter isOdd [1..n])

g x y = 2*x - y

f :: Char -> String -> String
f ch str
 | ('a' <= ch && ch <= 'z') = ch : str
 | otherwise = str

d x y = x*y
unCur = map (uncurry d) [(1,2),(3,4),(5,6)]

q (x,y) = x+y

w x y = x + 2*y

h = (>5) . (10-)

j r s = 2*r + 3*s

