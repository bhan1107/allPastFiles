prep :: [Int] -> [Int]

Prep list1
 | 
 | (last list1) < (last (init list1)) = Prep (init list1)
 | otherwise = 
 where
 (x:xs) = list1
