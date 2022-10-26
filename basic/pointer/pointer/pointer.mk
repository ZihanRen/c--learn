##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=pointer
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/rtopa/repo/cplus-learn/basic/basic
ProjectPath            :=C:/Users/rtopa/repo/cplus-learn/basic/pointer/pointer
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=rtopa
Date                   :=02/10/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="pointer.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/ar.exe rcu
CXX      := C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe
CC       := C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW64/x86_64-8.1.0-release-posix-seh-rt_v6-rev0/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/up_up_example.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_reference.cpp$(ObjectSuffix) $(IntermediateDirectory)/pointer_to_func.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_up_example.cpp$(ObjectSuffix): ../../example.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_example.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_example.cpp$(DependSuffix) -MM ../../example.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/example.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_example.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_example.cpp$(PreprocessSuffix): ../../example.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_example.cpp$(PreprocessSuffix) ../../example.cpp

$(IntermediateDirectory)/up_up_reference.cpp$(ObjectSuffix): ../../reference.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_reference.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_reference.cpp$(DependSuffix) -MM ../../reference.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/reference.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_reference.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_reference.cpp$(PreprocessSuffix): ../../reference.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_reference.cpp$(PreprocessSuffix) ../../reference.cpp

$(IntermediateDirectory)/pointer_to_func.cpp$(ObjectSuffix): pointer_to_func.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/pointer_to_func.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/pointer_to_func.cpp$(DependSuffix) -MM pointer_to_func.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/pointer/pointer/pointer_to_func.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pointer_to_func.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pointer_to_func.cpp$(PreprocessSuffix): pointer_to_func.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pointer_to_func.cpp$(PreprocessSuffix) pointer_to_func.cpp

$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix): ../../pointer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_pointer.cpp$(DependSuffix) -MM ../../pointer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/pointer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_pointer.cpp$(PreprocessSuffix): ../../pointer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_pointer.cpp$(PreprocessSuffix) ../../pointer.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


