// Copyright © 2020 by Miro Salminen

using UnrealBuildTool;
using System.Collections.Generic;

public class AutoBattlerProtoTarget : TargetRules
{
	public AutoBattlerProtoTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "AutoBattlerProto" } );
	}
}
