<?php
/**
 * @file
 * bw_skewed.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function bw_skewed_image_default_styles() {
  $styles = array();

  // Exported image style: bwskewed.
  $styles['bwskewed'] = array(
    'name' => 'bwskewed',
    'effects' => array(
      1 => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Rotate',
        'help' => 'Rotating an image may cause the dimensions of an image to increase to fit the diagonal.',
        'effect callback' => 'image_rotate_effect',
        'dimensions callback' => 'image_rotate_dimensions',
        'form callback' => 'image_rotate_form',
        'summary theme' => 'image_rotate_summary',
        'module' => 'image',
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => '5',
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
