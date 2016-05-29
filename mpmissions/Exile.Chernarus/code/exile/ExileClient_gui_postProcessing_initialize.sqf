/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

ExileClientPostProcessingColorCorrections = ppEffectCreate ["colorCorrections", 1500];
ExileClientPostProcessingColorCorrections ppEffectAdjust [0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]];
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
ExileClientPostProcessingBackgroundBlur = ppEffectCreate ["dynamicBlur", 401];
ExileClientPostProcessingBackgroundBlur ppEffectAdjust [1];
ExileClientPostProcessingBackgroundBlur ppEffectCommit 0;
ExileClientPostProcessingBackgroundBlur ppEffectEnable false;
ExileClientPostProcessingDelirium = ppEffectCreate ["wetDistortion", 301];
ExileClientPostProcessingDelirium ppEffectAdjust [2, 0.1, 0.1, 0.2, 0.2, 2, 2, 0.01, 0.01, 0.01, 0.01, 0.01, 0.1, 2, 2];
ExileClientPostProcessingDelirium ppEffectCommit 0;
ExileClientPostProcessingDelirium ppEffectEnable false;
true
