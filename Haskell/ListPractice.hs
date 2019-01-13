module ListPractice where
import Data.Char

thursday a 0 = a + 1
thursday 0 b = b + 2
thursday a b
 | a < 0 = 13
 | b < 2 = 17
 | a > b = thursday (a-5) b
 | a == b = a + 3
 | otherwise = thursday a (b-4)

roots a b c =
 [(-b + squareRoot)/2/a, (-b - squareRoot)/2/a ]
 where
 squareRoot = sqrt (b^2 - 4*a*c)

sumDigits int
 | int < 0 = error "Negative numver cannot be integer"
 | int > 9 = mod int 10 + sumDigits (div int 10)
 | otherwise = int

quizPrep = chr (ord 'c' + 2)

interlace (x:xs)
 | (x:xs) == "" = "XXXXX"
 | otherwise = xs
