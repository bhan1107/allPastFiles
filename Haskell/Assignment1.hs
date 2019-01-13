module Assignment1 where
import Data.Char

shape :: Double -> Double -> Double -> Char
shape x y z
 | x <= 0 = 'X'
 | y <= 0 = 'X'
 | z <= 0 = 'X'
 | x == y && x == z = 'S'
 | x == y || x == z = 'F'
 | otherwise = 'E'

volume :: Double -> Double -> Double -> Double
volume x y z
 | x < 0 || y < 0 || z < 0 = error "Ellipsoid with negative side(s)"
 | otherwise = 4/3*pi*x*y*z

logSum :: Int -> Int -> Double
logSum a b
 | a > b = 0
 | a == b = log (fromIntegral a)
 | otherwise = log (fromIntegral a) + logSum (a+1) b

growET :: Double -> Int -> Double
growET mass days
 | mass < 0 || days < 0 || days > 100 = error "Mass cannot be less than zero, days cannot be less than 0 and greater than 100"
 | days == 0 = mass 
 | days > 0 && mass < 1 = growET (mass*2) (days-1)
 | days > 0 && mass < 20 = growET ((mass*1.5)+2) (days-1)
 | days > 0 && mass < 100 = growET ((mass*1.2)+1) (days-1)
 | days > 0 && mass > 100 = growET ((mass*1.1)+0.5) (days-1)
