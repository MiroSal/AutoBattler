// Copyright © 2020 by Miro Salminen

using UnrealBuildTool;
using System.Collections.Generic;

public class AutoBattlerProtoEditorTarget : TargetRules
{
	public AutoBattlerProtoEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "AutoBattlerProto" } );
	}
}
