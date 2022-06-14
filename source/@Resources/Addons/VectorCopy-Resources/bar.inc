[Rainmeter]
SkinWidth=(Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarSpacing#)*#Bands#-#BarSpacing#)+Abs(Sin(#Angle#%360*Pi/180))*#Height#)
SkinHeight=(Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarSpacing#)*#Bands#-#BarSpacing#)+Abs(Cos(#Angle#%360*Pi/180))*#Height#)

[Shape]
Meter=Shape
TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarSpacing#)*#Bands#-#BarSpacing#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*#Height#:0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarSpacing#)*#Bands#-#BarSpacing#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*#Height#:0))
DynamicVariables=1
