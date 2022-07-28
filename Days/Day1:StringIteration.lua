

--[[
Hello, there. this is my first day of 100 days of code. I have decided to use this project to get to know more about lua
]]--

stri = "abcdefghijklmnopqrstuvwxyz"
stringLength = string.len(stri)



--For loops in strings
for c=1, stringLength do --Am taking this approach because it gives me access to the index of the character
    g = string.sub(stri, c, c) --my first idea here was to use bracket indexing but that only returned null. so i had to take a this aproach
    --print(g)
end


