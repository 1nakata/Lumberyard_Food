---mouse.lua
-- This script shows the UI Start Screen on the First Level 
-- Upon Clicking

local mouse = { 


}

function mouse:OnActivate()
    componentName = "MouseComponent"
    Debug.Log(componentName .. " has been activated.")
    leftbutton = InputDeviceMouse.mouse_button_left
    
    Debug.Log(Leftbutton .. " has been Clicked.")
    
	-- Display the mouse cursor.
	LyShineLua.ShowMouseCursor(true);

end



function mouse:OnDeactivate()
    componentName = "MouseComponent"
	Debug.Log(componentName .. " has been activated.")
end

return mouse