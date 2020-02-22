-- ScriptName.lua  Starts off with the same name as the file

local simple_trigger = 
{
    Properties =
    {
        -- Property definitions
        TextInput = {default = 'Some Text'},
        Number = {default = 0}
    }
}

function simple_trigger:OnActivate()
     -- Activation Code
     Debug.Log("Simple Trigger Script started \n".."String 2")
     print("Hello Print")
end

function simple_trigger:OnDeactivate()
     -- Deactivation Code
     Debug.Log("Lua Script Simple Ended \n")
end

return simple_trigger