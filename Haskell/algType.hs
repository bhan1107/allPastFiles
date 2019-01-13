data Person = MakePerson String [Person]

princeCharles =
 MakePerson "Charles" [
  (MakePerson "William" [
   (MakePerson "George" []),
   (MakePerson "Charlotte"[] ) ] ),
  (MakePerson "Harry" [])
 ]

getName :: Person -> String
getName (MakePerson name _) = name

getKids :: Person -> [Person]
getKids (MakePerson _ kids) = kids

showPerson :: Person -> String
showPerson p = showWithIndent p 0

showWithIndent (MakePerson name kids) n =
 (indent n) ++ name ++ "\n" ++ (showMultiple kids (n+1))

showMultiple :: [Person] -> Int -> String
showMultiple [] _ = ""
showMultiple (person:persons) indent =  (showWithIndent person indent) ++ (showMultiple persons indent) 

instance Show Person where
 show person = showPerson person

indent 0 = ""
indent n = "    " ++ (indent (n-1))

personCount (MakePerson _ []) = 1
personCount (MakePerson name kids)  = 1 + peopleCount kids 

peopleCount :: [Person] -> Int
peopleCount [] = 0
peopleCount (person:persons) = 1 + personCount person
