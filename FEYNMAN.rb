n = 1
sum = 0

while(n!=0)
  n = gets.chomp.to_i
  sum = 0
  for i in 1..n do
    sum += i**2
  end
  puts sum.to_s  unless sum == 0
end
