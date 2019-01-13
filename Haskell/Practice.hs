import Data.Char

multiWords (x:xs)
 | length list1 < 1 = xs
 | length (x:xs) < 2 = x
 | otherwise = (x ++ " ") ++  multiWords (xs)
 where
 list1 = (x:xs)
interlace :: [a]->[a]->[a]
interlace list1 list2
 |length list1 == 0 = list2
 |length list2 == 0 = list1
 |otherwise = x:y: interlace xs ys
 where
 (x:xs) = list1
 (y:ys) = list2

secondLast ::  String->Char
secondLast (x:xs)
 | length (x:xs) < 2 = error "secondLast with length < 2"
 | length (x:xs) == 2 = x
 | otherwise = secondLast (xs)

longString :: [[Char]] -> String
longString list1
 | length list1 < 1 = error "empty list"
 | length list1 == 1 = x 
 | length (last list1) > length (head list1) = longString (tail list1) 
 | otherwise = longString (init list1)
 where
 (x:xs) = list1

numFunc :: Int -> Int -> Int
numFunc 0 _ = 14
numFunc _ 6 = 29
numFunc a b
 | a > 2*b = a + b
 | a > b+5 = a + 2*b
 | a >= b = a + 3*b
 | otherwise = numFunc b a-2

enigma x 1 = 2*x
enigma 1 y = 3*y
enigma x y
 | y < 0 = x
 | x < 3 = 3
 | otherwise = 1 + enigma (x-y) (div x 2)
 
