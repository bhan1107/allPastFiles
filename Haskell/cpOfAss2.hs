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

sublistSum list1 theInt = [x|x <- findSublists list1, theInt ==  addList(x)]
findSublists [] = [[]]
findSublists (x:xs) = [x:findSublist|findSublist<-findSublists xs] ++ findSublists xs

runnerUp event year result = [ name | (e, y, m , name, c ) <- result, y==year, e==event, m==2 ]

medals namePlayer result = [ (gameName, year) | (gameName, year, m, n, c) <- result, n == namePlayer ]

goldCount countryName year result = addList( [ medals | (e,y,medals,n,c) <- result, c == countryName, y == year, medals == 1])

addList list1
 | length list1 == 0 = 0
 | otherwise = x + (addList xs)
 where
 (x:xs) = list1
