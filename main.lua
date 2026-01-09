-- name: [CS] Pik-Pak [WIP]
-- description: a CS mod featuring all three pikmin captains from Pikmin 2 (And more to come in the future!) \n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

local TEXT_MOD_NAME = "[CS] Pik-Pak"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end


local E_MODEL_OLIMAR_PIK = smlua_model_util_get_id("olimar_pik_geo")
local OLIMAR_PIK_ICON = get_texture_info("olimar_pik_icon")
local E_MODEL_LOUIE_PIK = smlua_model_util_get_id("louie_pik_geo")
local LOUIE_PIK_ICON = get_texture_info("louie_pik_icon")
local E_MODEL_CHACHO_PIK = smlua_model_util_get_id("chacho_pik_geo")
local CHACHO_PIK_ICON = get_texture_info("president_pik_icon")
local E_MODEL_ALPH_PIK = smlua_model_util_get_id("alph_pik_geo")
local ALPH_PIK_ICON = get_texture_info("alph_pik_icon")
local E_MODEL_BRITTANY_PIK = smlua_model_util_get_id("brittany_pik_geo")
local BRITTANY_PIK_ICON = get_texture_info("brit_pik_icon")

local VOICETABLE_OLIMAR_PIK = {
    [CHAR_SOUND_ATTACKED] = 'ogasp6.mp3',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'oidle6.mp3',
    [CHAR_SOUND_HAHA] = 'olimar.mp3',
    [CHAR_SOUND_HAHA_2] = 'oidle2.mp3',
    [CHAR_SOUND_HERE_WE_GO] = 'olimar.mp3',
    [CHAR_SOUND_HOOHOO] = 'oidle3.mp3',
    [CHAR_SOUND_ON_FIRE] = 'oyawn.mp3',
    [CHAR_SOUND_OOOF] = 'ogasp8.mp3',
    [CHAR_SOUND_OOOF2] = 'ogasp5.mp3',
    [CHAR_SOUND_PUNCH_HOO] = 'punch.mp3',
    [CHAR_SOUND_PUNCH_WAH] = 'punchair.mp3',
    [CHAR_SOUND_PUNCH_YAH] = 'punch.mp3',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'olimar.mp3',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'oidle3.mp3',
    [CHAR_SOUND_WAAAOOOW] = 'oidle2.mp3',
    [CHAR_SOUND_WAH2] = 'olimar.mp3',
    [CHAR_SOUND_WHOA] = 'oidle5.mp3',
    [CHAR_SOUND_YAHOO] = 'olimar.mp3',
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'ogasp3.mp3',
    [CHAR_SOUND_YAH_WAH_HOO] = {'ogasp1.mp3', 'ogasp2.mp3', 'oidle1.mp3'},
    [CHAR_SOUND_OKEY_DOKEY] = 'olimar.mp3',
    [CHAR_SOUND_LETS_A_GO] = 'olimar.mp3',
    [CHAR_SOUND_DYING] = 'oyawn.mp3',
    [CHAR_SOUND_DROWNING] = 'oyawn.mp3',
    [CHAR_SOUND_EEUH] = 'oyawn.mp3',
    [CHAR_SOUND_MAMA_MIA] = 'oyawn.mp3',
    [CHAR_SOUND_DOH] = 'ogasp4.mp3',
    [CHAR_SOUND_HRMM] = 'ogasp1.mp3',
    [CHAR_SOUND_PANTING] = 'ogasp2.mp3',
    [CHAR_SOUND_UH] = 'ogasp3.mp3',
}

local VOICETABLE_LOUIE_PIK = {
    [CHAR_SOUND_ATTACKED] = 'lgasp6.mp3',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'lidle6.mp3',
    [CHAR_SOUND_HAHA] = 'louie.mp3',
    [CHAR_SOUND_HAHA_2] = 'lidle2.mp3',
    [CHAR_SOUND_HERE_WE_GO] = 'louie.mp3',
    [CHAR_SOUND_HOOHOO] = 'lidle1.mp3',
    [CHAR_SOUND_ON_FIRE] = 'lidle7.mp3',
    [CHAR_SOUND_OOOF] = 'lgasp6.mp3',
    [CHAR_SOUND_OOOF2] = 'lgasp5.mp3',
    [CHAR_SOUND_PUNCH_HOO] = 'punch.mp3',
    [CHAR_SOUND_PUNCH_WAH] = 'punchair.mp3',
    [CHAR_SOUND_PUNCH_YAH] = 'punch.mp3',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'louie.mp3',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'lidle1.mp3',
    [CHAR_SOUND_WAAAOOOW] = 'lidle2.mp3',
    [CHAR_SOUND_WAH2] = 'louie.mp3',
    [CHAR_SOUND_WHOA] = 'lidle5.mp3',
    [CHAR_SOUND_YAHOO] = 'louie.mp3',
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'lgasp3.mp3',
    [CHAR_SOUND_YAH_WAH_HOO] = {'lgasp1.mp3', 'lgasp2.mp3', 'lidle1.mp3'},
    [CHAR_SOUND_OKEY_DOKEY] = 'louie.mp3',
    [CHAR_SOUND_LETS_A_GO] = 'louie.mp3',
    [CHAR_SOUND_DYING] = 'lidle7.mp3',
    [CHAR_SOUND_DROWNING] = 'lidle7.mp3',
    [CHAR_SOUND_EEUH] = 'lidle7.mp3',
    [CHAR_SOUND_MAMA_MIA] = 'lidle7.mp3',
    [CHAR_SOUND_DOH] = 'lgasp4.mp3',
    [CHAR_SOUND_HRMM] = 'lgasp1.mp3',
    [CHAR_SOUND_PANTING] = 'lgasp3.mp3',
    [CHAR_SOUND_UH] = 'lgasp3.mp3',
}

local VOICETABLE_CHACHO_PIK = {
    [CHAR_SOUND_ATTACKED] = 'pgasp3.mp3',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'pgasp3.mp3',
    [CHAR_SOUND_HAHA] = 'schecho1.mp3',
    [CHAR_SOUND_HAHA_2] = 'schecho3.mp3',
    [CHAR_SOUND_HERE_WE_GO] = 'schecho3.mp3',
    [CHAR_SOUND_HOOHOO] = 'pgasp2.mp3',
    [CHAR_SOUND_ON_FIRE] = 'pgasp6.mp3',
    [CHAR_SOUND_OOOF] = 'pgasp9.mp3',
    [CHAR_SOUND_OOOF2] = 'pgasp10.mp3',
    [CHAR_SOUND_PUNCH_HOO] = 'punch.mp3',
    [CHAR_SOUND_PUNCH_WAH] = 'punchair.mp3',
    [CHAR_SOUND_PUNCH_YAH] = 'punch.mp3',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'schecho2.mp3',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'pidle1.mp3',
    [CHAR_SOUND_WAAAOOOW] = 'pidle2.mp3',
    [CHAR_SOUND_WAH2] = 'schecho2.mp3',
    [CHAR_SOUND_WHOA] = 'pgasp5.mp3',
    [CHAR_SOUND_YAHOO] = 'schecho1.mp3',
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'pgasp3.mp3',
    [CHAR_SOUND_YAH_WAH_HOO] = {'pgasp8.mp3', 'pgasp6.mp3', 'pidle1.mp3'},
    [CHAR_SOUND_OKEY_DOKEY] = 'schecho1.mp3',
    [CHAR_SOUND_LETS_A_GO] = 'schecho1.mp3',
    [CHAR_SOUND_DYING] = 'pidle2.mp3',
    [CHAR_SOUND_DROWNING] = 'pidle2.mp3',
    [CHAR_SOUND_EEUH] = 'pidle3.mp3',
    [CHAR_SOUND_MAMA_MIA] = 'pgasp10.mp3',
    [CHAR_SOUND_DOH] = 'pgasp4.mp3',
    [CHAR_SOUND_HRMM] = 'pgasp1.mp3',
    [CHAR_SOUND_PANTING] = 'pgasp3.mp3',
    [CHAR_SOUND_UH] = 'pgasp5.mp3',
}

local VOICETABLE_ALPH_PIK = {
    [CHAR_SOUND_ATTACKED] = 'ahurt1.mp3',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'aidle2.mp3',
    [CHAR_SOUND_HAHA] = 'aledge3.mp3',
    [CHAR_SOUND_HAHA_2] = 'aledge3.mp3',
    [CHAR_SOUND_HERE_WE_GO] = 'alphyay.mp3',
    [CHAR_SOUND_HOOHOO] = 'aledge3.mp3',
    [CHAR_SOUND_ON_FIRE] = 'adanger2.mp3',
    [CHAR_SOUND_OOOF] = 'adanger2.mp3',
    [CHAR_SOUND_OOOF2] = 'adanger3.mp3',
    [CHAR_SOUND_PUNCH_HOO] = 'punch.mp3',
    [CHAR_SOUND_PUNCH_WAH] = 'punchair.mp3',
    [CHAR_SOUND_PUNCH_YAH] = 'punch.mp3',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'awoohoo.mp3',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'abounce.mp3',
    [CHAR_SOUND_WAAAOOOW] = 'ayell.mp3',
    [CHAR_SOUND_WAH2] = 'adanger2.mp3',
    [CHAR_SOUND_WHOA] = 'adanger3.mp3',
    [CHAR_SOUND_YAHOO] = 'ayaho.mp3',
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'alphyay.mp3', 'awoohoo.mp3', 'ayaho.mp3'},
    [CHAR_SOUND_YAH_WAH_HOO] = {'alilyidle1.mp3', 'alilyidle2.mp3', 'alilyidle3.mp3'},
    [CHAR_SOUND_OKEY_DOKEY] = 'ayaho.mp3',
    [CHAR_SOUND_LETS_A_GO] = 'aledge.mp3',
    [CHAR_SOUND_DYING] = 'alongfall.mp3',
    [CHAR_SOUND_DROWNING] = 'nothing.mp3',
    [CHAR_SOUND_EEUH] = 'adanger2.mp3',
    [CHAR_SOUND_MAMA_MIA] = 'adanger1.mp3',
    [CHAR_SOUND_DOH] = 'ahurt2.mp3',
    [CHAR_SOUND_HRMM] = 'alilyidle3.mp3',
    [CHAR_SOUND_PANTING] = nil,
    [CHAR_SOUND_UH] = 'ahurt1.mp3',
}

local VOICETABLE_NONE_PIK = {
    nil
}

local ANIMTABLE_OLIMAR_PIK = {
    [_G.charSelect.CS_ANIM_MENU] = 'olimar_menu_pose',
    [CHAR_ANIM_IDLE_HEAD_CENTER] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_LEFT] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = 'idle_olimar_pik',
}

local ANIMTABLE_LOUIE_PIK = {
    [_G.charSelect.CS_ANIM_MENU] = 'louie_menu_pose',
    [CHAR_ANIM_IDLE_HEAD_CENTER] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_LEFT] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = 'idle_olimar_pik',
}

local ANIMTABLE_CHACHO_PIK = {
    [_G.charSelect.CS_ANIM_MENU] = 'chacho_menu_pose',
    [CHAR_ANIM_IDLE_HEAD_CENTER] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_LEFT] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = 'idle_olimar_pik',
}

local ANIMTABLE_ALPH_PIK = {
    [_G.charSelect.CS_ANIM_MENU] = 'alph_menu_pose',
    [CHAR_ANIM_IDLE_HEAD_CENTER] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_LEFT] = 'idle_olimar_pik',
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = 'idle_olimar_pik',
}


local PALETTE_OLIMAR_PIK = {

    [PANTS]  = "FF0009",
    [SHIRT]  = "F3C866",
    [GLOVES] = "FF0009",
    [SHOES]  = "FF0009",
    [HAIR]   = "67422B",
    [SKIN]   = "F7AB87",
    [CAP]    = "D5786C",
	[EMBLEM] = "FF0009"
}


local PALETTE_OLIMAR_ALT1 = {

    [PANTS]  = "1e1e1e",
    [SHIRT]  = "b92323",
    [GLOVES] = "1e1e1e",
    [SHOES]  = "1e1e1e",
    [HAIR]   = "67422B",
    [SKIN]   = "F7AB87",
    [CAP]    = "D5786C",
	[EMBLEM] = "FF0009"
}

local PALETTE_OLIMAR_ALT2 = {

    [PANTS]  = "1e1e1e",
    [SHIRT]  = "41e544",
    [GLOVES] = "1e1e1e",
    [SHOES]  = "9afb9b",
    [HAIR]   = "67422B",
    [SKIN]   = "F7AB87",
    [CAP]    = "D5786C",
	[EMBLEM] = "41e544"
}

local PALETTE_OLIMAR_ALT3 = {

    [PANTS]  = "1e1e1e",
    [SHIRT]  = "7a7a7a",
    [GLOVES] = "1e1e1e",
    [SHOES]  = "4b4b4b",
    [HAIR]   = "67422B",
    [SKIN]   = "F7AB87",
    [CAP]    = "D5786C",
	[EMBLEM] = "ffffff"
}

local PALETTE_FIDDLEBERT = {

    [PANTS]  = "189110",
    [SHIRT]  = "7be64e",
    [GLOVES] = "189110",
    [SHOES]  = "189110",
    [HAIR]   = "0a8f0c",
    [SKIN]   = "bcf864",
    [CAP]    = "9be94f",
	[EMBLEM] = "7be64e"
}

local PALETTE_LOUIE_PIK = {

    [PANTS]  = "0000FF",
    [SHIRT]  = "F3C866",
    [GLOVES] = "0000FF",
    [SHOES]  = "0000FF",
    [HAIR]   = "D49F00",
    [SKIN]   = "F7AB87",
    [CAP]    = "CA7B40",
	[EMBLEM] = "0000FF"
}

local PALETTE_LOUIE_GRANDMA = {

    [PANTS]  = "f4d1a9",
    [SHIRT]  = "602539",
    [GLOVES] = "f4d1a9",
    [SHOES]  = "310b20",
    [HAIR]   = "a9a19f",
    [SKIN]   = "f4d1a9",
    [CAP]    = "ffa560",
	[EMBLEM] = "602539"
}

local PALETTE_CHACHO_PIK = {

    [PANTS]  = "0000FF",
    [SHIRT]  = "2A2A2A",
    [GLOVES] = "FFFFFF",
    [SHOES]  = "FFE615",
    [HAIR]   = "000000",
    [SKIN]   = "F7AB87",
    [CAP]    = "D58768",
	[EMBLEM] = "0000FF"
}

local PALETTE_CHACHO_ALT1 = {

    [PANTS]  = "FFE615",
    [SHIRT]  = "2A2A2A",
    [GLOVES] = "FFFFFF",
    [SHOES]  = "FFE615",
    [HAIR]   = "000000",
    [SKIN]   = "F7AB87",
    [CAP]    = "D58768",
	[EMBLEM] = "FFE615"
}

local PALETTE_CHACHO_WIFE = {

    [PANTS]  = "FFFFFF",
    [SHIRT]  = "ffa0ff",
    [GLOVES] = "FFFFFF",
    [SHOES]  = "FFFFFF",
    [HAIR]   = "793192",
    [SKIN]   = "f0d6bd",
    [CAP]    = "d39394",
	[EMBLEM] = "ffa0ff"
}

local PALETTE_ALPH_PIK = {

    [PANTS]  = "3484BF",
    [SHIRT]  = "ffffff",
    [GLOVES] = "3484BF",
    [SHOES]  = "3484BF",
    [HAIR]   = "3484BF",
    [SKIN]   = "f19e78",
    [CAP]    = "D5786C",
	[EMBLEM] = "45B0FF"
}

local PALETTE_ALPH_ALT1 = {

    [PANTS]  = "349b4b",
    [SHIRT]  = "d5ffd6",
    [GLOVES] = "349b4b",
    [SHOES]  = "349b4b",
    [HAIR]   = "644c3e",
    [SKIN]   = "f19e78",
    [CAP]    = "D5786C",
	[EMBLEM] = "18e947"
}

local PALETTE_ALPH_ALT2 = {

    [PANTS]  = "E664DB",
    [SHIRT]  = "ffc8fa",
    [GLOVES] = "E664DB",
    [SHOES]  = "E664DB",
    [HAIR]   = "E664DB",
    [SKIN]   = "f19e78",
    [CAP]    = "D5786C",
	[EMBLEM] = "FF6FF3"
}

local PALETTE_ALPH_ALT3 = {

    [PANTS]  = "d43333",
    [SHIRT]  = "fff0c8",
    [GLOVES] = "d43333",
    [SHOES]  = "d43333",
    [HAIR]   = "67422B",
    [SKIN]   = "f19e78",
    [CAP]    = "D5786C",
	[EMBLEM] = "FF0009"
}

local PALETTE_BRITTANY_PIK = {

    [PANTS]  = "E664DB",
    [SHIRT]  = "FFFFFF",
    [GLOVES] = "E664DB",
    [SHOES]  = "E664DB",
    [HAIR]   = "E664DB",
    [SKIN]   = "F7AB87",
    [CAP]    = "FF005F",
	[EMBLEM] = "FF6FF3"
}

local CAPTABLE_PIK_PAK = {
    normal = smlua_model_util_get_id("pik_helm_geo"),
    wing = smlua_model_util_get_id("pik_helm_wing_geo"),
    metal = smlua_model_util_get_id("pik_helm_metal_geo"),
    metalWing = smlua_model_util_get_id("pik_helm_wing_metal_geo")
}

local TEX_PIK_HEALTH_BUBBLE = get_texture_info("pik_health_bubble")
local TEX_PIK_HEALTH_BACK = get_texture_info("pik_health_back")
local TEX_PIK_HEALTH_FILL = get_texture_info("pik_health_fill")

local function health_render_pikmin(localIndex, health, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)
    local healthScale = health >= 0x100 and math.clamp((health - 0x80)/0x800, 0, 1) or 0
    local prevScaleW = prevScaleW/64
    local prevScaleH = prevScaleH/64
    local scaleW = scaleW/64
    local scaleH = scaleH/64

    local djuiFilter = djui_hud_get_filter()
    djui_hud_set_filter(FILTER_LINEAR)

    local djuiColor = djui_hud_get_color()
    local healthColor = {r = 0, g = 255, b = 0}
    if healthScale <= 0.25 then
        healthColor = {r = 255, g = 0, b = 0}
    elseif healthScale <= 0.5 then
        healthColor = {r = 255, g = 255, b = 0}
    end

    local screenWidth = djui_hud_get_screen_width()
    local screenHeight = djui_hud_get_screen_height()

    djui_hud_set_color(0, 0, 0, 100)
    djui_hud_render_texture_interpolated(TEX_PIK_HEALTH_BACK, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)

    djui_hud_set_color(healthColor.r*(djuiColor.r/255), healthColor.g*(djuiColor.g/255), healthColor.b*(djuiColor.b/255), 255)
    if healthScale > 0.5 then
        djui_hud_set_scissor((prevX + 32)/screenWidth*320*prevScaleW, -prevY/screenHeight*240*prevScaleH, (prevX + 64)/screenWidth*320*prevScaleW, (prevY + 64)/screenHeight*240*prevScaleH)
        djui_hud_set_rotation(healthScale*0x10000 + 0x8000, 1, 0.5)
        djui_hud_render_texture_interpolated(TEX_PIK_HEALTH_FILL, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)
        djui_hud_set_rotation(0, 0, 0)
        djui_hud_reset_scissor()
    else
        djui_hud_set_scissor(prevX/screenWidth*320*prevScaleW, -prevY/screenHeight*240*prevScaleH, (prevX + 32)/screenWidth*320*prevScaleW, (prevY + 64)/screenHeight*240*prevScaleH)
        djui_hud_set_rotation(healthScale*0x10000 + 0x8000, 1, 0.5)
    end
    djui_hud_render_texture_interpolated(TEX_PIK_HEALTH_FILL, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)
    djui_hud_set_rotation(0, 0, 0)
    djui_hud_reset_scissor()

    djui_hud_set_color(djuiColor.r, djuiColor.g, djuiColor.b, 255)
    djui_hud_render_texture_interpolated(TEX_PIK_HEALTH_BUBBLE, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)

    djui_hud_set_filter(djuiFilter)
end

if _G.charSelectExists then
    CT_OLIMAR_PIK = _G.charSelect.character_add("Olimar", {"A hard worker and family man who often sacrifices his time off to support his family. He also seems to be a magnet for bad luck."}, "Kaktus64", {r = 245, g = 35, b = 0}, E_MODEL_OLIMAR_PIK, CT_MARIO, OLIMAR_PIK_ICON, 0.9)
    CT_LOUIE_PIK = _G.charSelect.character_add("Louie", {"The quiet new driver and the embodiment of the word 'troublemaker.' He has a ravenous and alarmingly adventurous appetite."}, "Kaktus64", {r = 0, g = 20, b = 255}, E_MODEL_LOUIE_PIK, CT_LUIGI, LOUIE_PIK_ICON)
    CT_CHACHO_PIK = _G.charSelect.character_add("The President", {"The president of Hocotate Freight. He loves money and works his employees hard, but he somehow has a hard to dislike personality."}, "Kaktus64", {r = 255, g = 230, b = 21}, E_MODEL_CHACHO_PIK, CT_WARIO, CHACHO_PIK_ICON, 0.95)
    CT_ALPH_PIK = _G.charSelect.character_add("Alph", {"Alph is the young engineer of the S.S. Drake. An honest fellow with a positive attitude, Alph happens to be the crew member with the most common sense."}, "Kaktus64", {r = 67, g = 171, b = 248}, E_MODEL_ALPH_PIK, CT_TOAD, ALPH_PIK_ICON, 0.9)
    CT_BRITTANY_PIK = _G.charSelect.character_add("Brittany", {"Brittany is the botanist of the S.S. Drake. She is mostly a caring and friendly individual, but is fairly easy to tick off."}, "Kaktus64", {r = 230, g = 100, b = 219}, E_MODEL_BRITTANY_PIK, CT_LUIGI, BRITTANY_PIK_ICON)
    CT_CHARLIE_PIK = _G.charSelect.character_add("Charlie", {"Charlie is the captain of the S.S. Drake. He's a very level-headed person, who is very caring about his crew and his ship."}, "Kaktus64", {r = 22, g = 148, b = 44}, E_MODEL_MARIO, CT_WARIO, nil)
end

local function on_character_select_load()
        _G.charSelect.character_add_voice(E_MODEL_OLIMAR_PIK, VOICETABLE_OLIMAR_PIK)
        _G.charSelect.character_add_animations(E_MODEL_OLIMAR_PIK, ANIMTABLE_OLIMAR_PIK)
        _G.charSelect.character_add_palette_preset(E_MODEL_OLIMAR_PIK, PALETTE_OLIMAR_PIK, "Olimar")
        _G.charSelect.character_add_palette_preset(E_MODEL_OLIMAR_PIK, PALETTE_OLIMAR_ALT1, "Red")
        _G.charSelect.character_add_palette_preset(E_MODEL_OLIMAR_PIK, PALETTE_OLIMAR_ALT2, "Green")
        _G.charSelect.character_add_palette_preset(E_MODEL_OLIMAR_PIK, PALETTE_OLIMAR_ALT3, "Gray")
        _G.charSelect.character_add_palette_preset(E_MODEL_OLIMAR_PIK, PALETTE_FIDDLEBERT, "Removed")
        _G.charSelect.character_add_caps(E_MODEL_OLIMAR_PIK, CAPTABLE_PIK_PAK)
        _G.charSelect.character_set_category(CT_OLIMAR_PIK, "Pik-Pak", true)
        _G.charSelect.character_add_health_meter(CT_OLIMAR_PIK, health_render_pikmin)

        _G.charSelect.character_add_voice(E_MODEL_LOUIE_PIK, VOICETABLE_LOUIE_PIK)
        _G.charSelect.character_add_animations(E_MODEL_LOUIE_PIK, ANIMTABLE_LOUIE_PIK)
        _G.charSelect.character_add_palette_preset(E_MODEL_LOUIE_PIK, PALETTE_LOUIE_PIK, "Louie")
        _G.charSelect.character_add_palette_preset(E_MODEL_LOUIE_PIK, PALETTE_LOUIE_GRANDMA, "Grandma")
        _G.charSelect.character_add_caps(E_MODEL_LOUIE_PIK, CAPTABLE_PIK_PAK)
        _G.charSelect.character_set_category(CT_LOUIE_PIK, "Pik-Pak", true)
        _G.charSelect.character_add_health_meter(CT_LOUIE_PIK, health_render_pikmin)

        _G.charSelect.character_add_voice(E_MODEL_CHACHO_PIK, VOICETABLE_CHACHO_PIK)
        _G.charSelect.character_add_animations(E_MODEL_CHACHO_PIK, ANIMTABLE_CHACHO_PIK)
        _G.charSelect.character_add_palette_preset(E_MODEL_CHACHO_PIK, PALETTE_CHACHO_PIK, "The President")
        _G.charSelect.character_add_palette_preset(E_MODEL_CHACHO_PIK, PALETTE_CHACHO_ALT1, "Yellow Light")
        _G.charSelect.character_add_palette_preset(E_MODEL_CHACHO_PIK, PALETTE_CHACHO_WIFE, "Wife")
        _G.charSelect.character_add_caps(E_MODEL_CHACHO_PIK, CAPTABLE_PIK_PAK)
        _G.charSelect.character_set_category(CT_CHACHO_PIK, "Pik-Pak")
        _G.charSelect.character_add_health_meter(CT_CHACHO_PIK, health_render_pikmin)
        
        _G.charSelect.character_add_voice(E_MODEL_ALPH_PIK, VOICETABLE_ALPH_PIK)
        _G.charSelect.character_add_animations(E_MODEL_ALPH_PIK, ANIMTABLE_ALPH_PIK)
        _G.charSelect.character_add_palette_preset(E_MODEL_ALPH_PIK, PALETTE_ALPH_PIK, "Alph")
        _G.charSelect.character_add_palette_preset(E_MODEL_ALPH_PIK, PALETTE_ALPH_ALT1, "Green")
        _G.charSelect.character_add_palette_preset(E_MODEL_ALPH_PIK, PALETTE_ALPH_ALT2, "Pink")
        _G.charSelect.character_add_palette_preset(E_MODEL_ALPH_PIK, PALETTE_ALPH_ALT3, "Red")
        _G.charSelect.character_add_caps(E_MODEL_ALPH_PIK, CAPTABLE_PIK_PAK)
        _G.charSelect.character_set_category(CT_ALPH_PIK, "Pik-Pak")
        _G.charSelect.character_add_health_meter(CT_ALPH_PIK, health_render_pikmin)

        _G.charSelect.character_add_voice(E_MODEL_BRITTANY_PIK, VOICETABLE_NONE_PIK)
        _G.charSelect.character_add_animations(E_MODEL_BRITTANY_PIK, ANIMTABLE_ALPH_PIK)
        _G.charSelect.character_add_palette_preset(E_MODEL_BRITTANY_PIK, PALETTE_BRITTANY_PIK)
        _G.charSelect.character_set_category(CT_BRITTANY_PIK, "Pik-Pak")
        _G.charSelect.character_add_health_meter(CT_BRITTANY_PIK, health_render_pikmin)

        local MOD_NAME = "Pik-Pak"
        _G.charSelect.credit_add(MOD_NAME, "Kaktus64", "Modeling & Rigging")
        _G.charSelect.credit_add(MOD_NAME, "SwagSkeleton95", "Voiceline Collecting")
    CSloaded = true
end
local function olimar_torso_tilt_fix(m)
    if _G.charSelect.character_get_current_number() == CT_OLIMAR_PIK and m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    if _G.charSelect.character_get_current_number() == CT_LOUIE_PIK and m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    if _G.charSelect.character_get_current_number() == CT_CHACHO_PIK and m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    if _G.charSelect.character_get_current_number() == CT_ALPH_PIK and m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    if _G.charSelect.character_get_current_number() == CT_BRITTANY_PIK and m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    if _G.charSelect.character_get_current_number() == CT_OLIMAR_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_OLIMAR_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_WING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_LOUIE_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_LOUIE_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_WING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_CHACHO_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_CHACHO_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_WING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_ALPH_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_ALPH_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_WING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_BRITTANY_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
    if _G.charSelect.character_get_current_number() == CT_BRITTANY_PIK and m.marioBodyState.handState == MARIO_HAND_HOLDING_WING_CAP then
        m.marioBodyState.handState = MARIO_HAND_FISTS
    end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_MARIO_UPDATE, olimar_torso_tilt_fix)
