-- ScriptName.lua  Starts off with the same name as the file

local simple = 
{
    Properties =
    {
        -- Property definitions
        TextInput = {default = 'Some Text'},
        Number = {default = 0}
    }
}

function simple:OnActivate()
     -- Activation Code
     Debug.Log("Lua Script Simple Started \n".."String 2")
     print("Hello Print")
end

function simple:OnDeactivate()
     -- Deactivation Code
     Debug.Log("Lua Script Simple Ended \n")
end

return simple