module Assignment2 where

import OlympicDatabase

doubleVowel str1
 | length str1 == 0 = []
 | (length str1) == 1 && (x == 'a'|| x == 'e'|| x == 'i'|| x == 'o'|| x == 'u') = x:x:[]
 | (x == 'a'|| x == 'e'|| x == 'i'|| x == 'o'|| x == 'u') = (x:(x:[]))++(doubleVowel xs)
 | (length str1) > 1  = (x:[]) ++ (doubleVowel xs)
 | otherwise = str1
 where
 (x:xs) = str1

pairFlip list1
 | length list1 == 0 = []
 | (length list1) == 1 = list1
 | otherwise = ((head xs):x:[]) ++ (pairFlip (tail xs))
 where
 (x:xs) = list1

modifyList list1 theInt
 | (x < theInt) && (length list1) > 0 = x:[] ++ (sublistSum xs theInt)
 | otherwise = []
 where
 (x:xs) = list1

