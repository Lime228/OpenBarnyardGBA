project "BYard"
	language "C++"
	cppdialect "C++20"
	staticruntime "on"
	characterset "ASCII"

	files
	{
		"Source/**.h",
		"Source/**.cpp",
	}
	
	includedirs
	{
		"Source"
	}
	
	postbuildcommands
	{
		"{COPYDIR} Data \"%{wks.location}bin/" .. outputdir .. "/%{prj.name}/Data\"",
		"{COPYDIR} \"" .. ClientContentCommon  .. "\" \"%{wks.location}bin/" .. outputdir .. "/%{prj.name}/\"",
		"{COPYDIR} \"" .. ClientContentArch    .. "\" \"%{wks.location}bin/" .. outputdir .. "/%{prj.name}/\"",
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
			"HB_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		kind "ConsoleApp"
		runtime "Debug"
		defines "HB_DEBUG"
		symbols "On"

	filter "configurations:Release"
		kind "ConsoleApp"
		runtime "Release"
		defines "HB_RELEASE"
		optimize "On"

	filter "configurations:Final"
		kind "WindowedApp"
		runtime "Release"
		defines "HB_FINAL"
		optimize "On"
