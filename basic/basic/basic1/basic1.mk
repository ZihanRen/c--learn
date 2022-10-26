##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=basic1
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/rtopa/repo/cplus-learn/basic/basic
ProjectPath            :=C:/Users/rtopa/repo/cplus-learn/basic/basic/basic1
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=rtopa
Date                   :=03/10/2022
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
ObjectsFileList        :="basic1.txt"
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
Objects0=$(IntermediateDirectory)/up_up_arr.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_arrmultidim.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_basicIO.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_err.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_namespace.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_funcref.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_loop.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_vector.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_ifandcase.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_linkerr.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_logic-operator.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_function.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_string-num.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_test_for_equal.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_operator.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_statement.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_varconst.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_size.cpp$(ObjectSuffix) \
	



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
$(IntermediateDirectory)/up_up_arr.cpp$(ObjectSuffix): ../../arr.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_arr.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_arr.cpp$(DependSuffix) -MM ../../arr.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/arr.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_arr.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_arr.cpp$(PreprocessSuffix): ../../arr.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_arr.cpp$(PreprocessSuffix) ../../arr.cpp

$(IntermediateDirectory)/up_up_arrmultidim.cpp$(ObjectSuffix): ../../arrmultidim.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_arrmultidim.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_arrmultidim.cpp$(DependSuffix) -MM ../../arrmultidim.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/arrmultidim.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_arrmultidim.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_arrmultidim.cpp$(PreprocessSuffix): ../../arrmultidim.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_arrmultidim.cpp$(PreprocessSuffix) ../../arrmultidim.cpp

$(IntermediateDirectory)/up_up_basicIO.cpp$(ObjectSuffix): ../../basicIO.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_basicIO.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_basicIO.cpp$(DependSuffix) -MM ../../basicIO.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/basicIO.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_basicIO.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_basicIO.cpp$(PreprocessSuffix): ../../basicIO.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_basicIO.cpp$(PreprocessSuffix) ../../basicIO.cpp

$(IntermediateDirectory)/up_up_err.cpp$(ObjectSuffix): ../../err.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_err.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_err.cpp$(DependSuffix) -MM ../../err.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/err.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_err.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_err.cpp$(PreprocessSuffix): ../../err.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_err.cpp$(PreprocessSuffix) ../../err.cpp

$(IntermediateDirectory)/up_up_namespace.cpp$(ObjectSuffix): ../../namespace.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_namespace.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_namespace.cpp$(DependSuffix) -MM ../../namespace.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/namespace.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_namespace.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_namespace.cpp$(PreprocessSuffix): ../../namespace.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_namespace.cpp$(PreprocessSuffix) ../../namespace.cpp

$(IntermediateDirectory)/up_up_funcref.cpp$(ObjectSuffix): ../../funcref.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_funcref.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_funcref.cpp$(DependSuffix) -MM ../../funcref.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/funcref.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_funcref.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_funcref.cpp$(PreprocessSuffix): ../../funcref.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_funcref.cpp$(PreprocessSuffix) ../../funcref.cpp

$(IntermediateDirectory)/up_up_loop.cpp$(ObjectSuffix): ../../loop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_loop.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_loop.cpp$(DependSuffix) -MM ../../loop.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/loop.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_loop.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_loop.cpp$(PreprocessSuffix): ../../loop.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_loop.cpp$(PreprocessSuffix) ../../loop.cpp

$(IntermediateDirectory)/up_up_vector.cpp$(ObjectSuffix): ../../vector.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_vector.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_vector.cpp$(DependSuffix) -MM ../../vector.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/vector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_vector.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_vector.cpp$(PreprocessSuffix): ../../vector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_vector.cpp$(PreprocessSuffix) ../../vector.cpp

$(IntermediateDirectory)/up_up_ifandcase.cpp$(ObjectSuffix): ../../ifandcase.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_ifandcase.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_ifandcase.cpp$(DependSuffix) -MM ../../ifandcase.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/ifandcase.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_ifandcase.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_ifandcase.cpp$(PreprocessSuffix): ../../ifandcase.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_ifandcase.cpp$(PreprocessSuffix) ../../ifandcase.cpp

$(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(ObjectSuffix): ../../mixed_expression_conversion.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(DependSuffix) -MM ../../mixed_expression_conversion.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/mixed_expression_conversion.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(PreprocessSuffix): ../../mixed_expression_conversion.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_mixed_expression_conversion.cpp$(PreprocessSuffix) ../../mixed_expression_conversion.cpp

$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix): ../../pointer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_pointer.cpp$(DependSuffix) -MM ../../pointer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/pointer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_pointer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_pointer.cpp$(PreprocessSuffix): ../../pointer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_pointer.cpp$(PreprocessSuffix) ../../pointer.cpp

$(IntermediateDirectory)/up_up_linkerr.cpp$(ObjectSuffix): ../../linkerr.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_linkerr.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_linkerr.cpp$(DependSuffix) -MM ../../linkerr.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/linkerr.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_linkerr.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_linkerr.cpp$(PreprocessSuffix): ../../linkerr.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_linkerr.cpp$(PreprocessSuffix) ../../linkerr.cpp

$(IntermediateDirectory)/up_up_logic-operator.cpp$(ObjectSuffix): ../../logic-operator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_logic-operator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_logic-operator.cpp$(DependSuffix) -MM ../../logic-operator.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/logic-operator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_logic-operator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_logic-operator.cpp$(PreprocessSuffix): ../../logic-operator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_logic-operator.cpp$(PreprocessSuffix) ../../logic-operator.cpp

$(IntermediateDirectory)/up_up_function.cpp$(ObjectSuffix): ../../function.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_function.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_function.cpp$(DependSuffix) -MM ../../function.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/function.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_function.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_function.cpp$(PreprocessSuffix): ../../function.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_function.cpp$(PreprocessSuffix) ../../function.cpp

$(IntermediateDirectory)/up_up_string-num.cpp$(ObjectSuffix): ../../string-num.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_string-num.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_string-num.cpp$(DependSuffix) -MM ../../string-num.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/string-num.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_string-num.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_string-num.cpp$(PreprocessSuffix): ../../string-num.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_string-num.cpp$(PreprocessSuffix) ../../string-num.cpp

$(IntermediateDirectory)/up_up_test_for_equal.cpp$(ObjectSuffix): ../../test_for_equal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_test_for_equal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_test_for_equal.cpp$(DependSuffix) -MM ../../test_for_equal.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/test_for_equal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_test_for_equal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_test_for_equal.cpp$(PreprocessSuffix): ../../test_for_equal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_test_for_equal.cpp$(PreprocessSuffix) ../../test_for_equal.cpp

$(IntermediateDirectory)/up_up_operator.cpp$(ObjectSuffix): ../../operator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_operator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_operator.cpp$(DependSuffix) -MM ../../operator.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/operator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_operator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_operator.cpp$(PreprocessSuffix): ../../operator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_operator.cpp$(PreprocessSuffix) ../../operator.cpp

$(IntermediateDirectory)/up_up_statement.cpp$(ObjectSuffix): ../../statement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_statement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_statement.cpp$(DependSuffix) -MM ../../statement.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/statement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_statement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_statement.cpp$(PreprocessSuffix): ../../statement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_statement.cpp$(PreprocessSuffix) ../../statement.cpp

$(IntermediateDirectory)/up_up_varconst.cpp$(ObjectSuffix): ../../varconst.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_varconst.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_varconst.cpp$(DependSuffix) -MM ../../varconst.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/varconst.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_varconst.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_varconst.cpp$(PreprocessSuffix): ../../varconst.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_varconst.cpp$(PreprocessSuffix) ../../varconst.cpp

$(IntermediateDirectory)/up_up_size.cpp$(ObjectSuffix): ../../size.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_size.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_size.cpp$(DependSuffix) -MM ../../size.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/rtopa/repo/cplus-learn/basic/size.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_size.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_size.cpp$(PreprocessSuffix): ../../size.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_size.cpp$(PreprocessSuffix) ../../size.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


