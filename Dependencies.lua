IncludeDir = {}

LibDir = {}

-- content of these folders should be copied to any client application
ClientContentCommon = "%{wks.location}Content/Common/"
ClientContentArch   = "%{wks.location}Content"

-- modify paths based on architecture
ClientContentArch = ClientContentArch .. "/" .. _OPTIONS["arch"] .. "/"