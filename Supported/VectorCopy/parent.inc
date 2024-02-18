010201
6
[P]
Measure=Plugin
Plugin=AudioAnalyzer
Disabled=1
Type=Parent
Source=DefaultOutput
Threading=Policy SeparateThread | UpdateRate 200 | WarnTime -1
ProcessingUnits=U0
Unit-U0=Channels #Channel# | Handlers P0H0,P0H1(P0H0),P0(P0H1),P1H0,P1H1(P1H0),P1(P1H1),P2H0,P2H1(P2H0),P2(P2H1),P3H0,P3H1(P3H0),P3(P3H1),P4H0,P4H1(P4H0),P4(P4H1),P5H0,P5H1(P5H0),P5(P5H1)
Handler-P0H0=Type FFT | BinWidth #Accuracy0# | OverlapBoost #Overlap0# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P0H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P0=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
Handler-P1H0=Type FFT | BinWidth #Accuracy1# | OverlapBoost #Overlap1# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P1H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P1=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
Handler-P2H0=Type FFT | BinWidth #Accuracy2# | OverlapBoost #Overlap2# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P2H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P2=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
Handler-P3H0=Type FFT | BinWidth #Accuracy3# | OverlapBoost #Overlap3# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P3H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P3=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
Handler-P4H0=Type FFT | BinWidth #Accuracy4# | OverlapBoost #Overlap4# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P4H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P4=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
Handler-P5H0=Type FFT | BinWidth #Accuracy5# | OverlapBoost #Overlap5# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-P5H1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-P5=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
