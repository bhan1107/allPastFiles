data Person = MakePerson String Int Float

him = MakePerson "Servant" 32 180.2
king = MakePerson "Charles" 22 175.2
queen = MakePerson "Elezabeth" 78 166.5

tall :: Person -> Bool 
tall (MakePerson _ _ height) = tallerThan height 

tallerThan height
 | height >= 180 = True
 | otherwise = False

oldest :: [Person] -> String
oldest [] = error "Empty list as a parameter"
oldest theList
 | findHeight (head theList) > findHeight (last theList) = oldest (init theList)
 | findHeight (head theList) <= findHeight (last theList) = oldest (tail theList)
 | otherwise = findName (head theList) 

findName (MakePerson name _ _) = name

findHeight :: Person -> Float
findHeight (MakePerson _ _ n) = n

birthday :: Person -> Person
birthday (MakePerson name age height) = makeNew name age height

instance Show Person where
 show (MakePerson name _ _ ) = name

makeNew :: String -> Int -> Float -> Person
makeNew name age height = MakePerson (name) (age+1) (height)
